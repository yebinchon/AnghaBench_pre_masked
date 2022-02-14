
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int is_delete; int * ns; } ;
struct tomoyo_io_buffer {scalar_t__ type; int (* write ) (struct tomoyo_io_buffer*) ;TYPE_1__ w; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,char*,scalar_t__) ;
 char* FUNC_1 (char*,char) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (struct tomoyo_io_buffer*) ;
 int * FUNC_5 (char*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(struct tomoyo_io_buffer *VAR_4, char *VAR_5)
{

 VAR_4->w.is_delete = !FUNC_3(VAR_5, "delete ", 7);
 if (VAR_4->w.is_delete)
  FUNC_0(VAR_5, VAR_5 + 7, FUNC_2(VAR_5 + 7) + 1);

 if (VAR_4->type == VAR_1 ||
     VAR_4->type == VAR_2) {
  if (*VAR_5 == '<') {
   char *VAR_6 = FUNC_1(VAR_5, ' ');

   if (VAR_6) {
    *VAR_6++ = '\0';
    VAR_4->w.ns = FUNC_5(VAR_5);
    FUNC_0(VAR_5, VAR_6, FUNC_2(VAR_6) + 1);
   } else
    VAR_4->w.ns = ((void*)0);
  } else
   VAR_4->w.ns = &VAR_3;

  if (!VAR_4->w.ns)
   return -VAR_0;
 }

 return VAR_4->write(VAR_4);
}
