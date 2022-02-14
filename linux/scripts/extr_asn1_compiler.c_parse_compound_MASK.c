
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct token {scalar_t__ token_type; int line; char* content; } ;
struct element {int flags; struct element* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 char* VAR_6 ;
 int FUNC_1 (int ,char*,char*,...) ;
 struct element* FUNC_2 (struct token**,struct token*,struct token*) ;
 int VAR_7 ;

__attribute__((used)) static struct element *FUNC_3(struct token **VAR_8, struct token *VAR_9,
          int VAR_10)
{
 struct element *VAR_11, **VAR_12 = &VAR_11, *VAR_13;
 struct token *VAR_14 = *VAR_8, *VAR_15;

 if (VAR_14->token_type != VAR_5) {
  FUNC_1(VAR_7, "%s:%d: Expected compound to start with brace not '%s'\n",
   VAR_6, VAR_14->line, VAR_14->content);
  FUNC_0(1);
 }
 VAR_14++;
 if (VAR_14 >= VAR_9)
  goto overrun_error;

 if (VAR_14->token_type == VAR_5) {
  FUNC_1(VAR_7, "%s:%d: Empty compound\n",
   VAR_6, VAR_14->line);
  FUNC_0(1);
 }

 for (;;) {
  VAR_15 = ((void*)0);
  if (VAR_14->token_type == VAR_4) {
   VAR_15 = VAR_14;
   VAR_14++;
   if (VAR_14 >= VAR_9)
    goto overrun_error;
  }

  VAR_13 = FUNC_2(&VAR_14, VAR_9, VAR_15);
  if (VAR_10)
   VAR_13->flags |= VAR_1 | VAR_0;

  *VAR_12 = VAR_13;
  VAR_12 = &VAR_13->next;

  if (VAR_14 >= VAR_9)
   goto overrun_error;
  if (VAR_14->token_type != VAR_3)
   break;
  VAR_14++;
  if (VAR_14 >= VAR_9)
   goto overrun_error;
 }

 VAR_11->flags &= ~VAR_0;

 if (VAR_14->token_type != VAR_2) {
  FUNC_1(VAR_7, "%s:%d: Expected compound closure, got '%s'\n",
   VAR_6, VAR_14->line, VAR_14->content);
  FUNC_0(1);
 }
 VAR_14++;

 *VAR_8 = VAR_14;
 return VAR_11;

overrun_error:
 FUNC_1(VAR_7, "%s: Unexpectedly hit EOF\n", VAR_6);
 FUNC_0(1);
}
