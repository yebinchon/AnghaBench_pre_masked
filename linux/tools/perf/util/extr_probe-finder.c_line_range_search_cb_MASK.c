
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line_range {scalar_t__ offset; scalar_t__ start; scalar_t__ end; int function; scalar_t__ file; } ;
struct line_finder {scalar_t__ fname; scalar_t__ lno_s; scalar_t__ lno_e; struct line_range* lr; } ;
struct dwarf_callback_param {int retval; struct line_finder* data; } ;
typedef int Dwarf_Die ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,struct line_finder*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,scalar_t__*) ;
 int FUNC_6 (int *,struct line_finder*) ;
 int VAR_3 ;
 int FUNC_7 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_9(Dwarf_Die *VAR_4, void *VAR_5)
{
 struct dwarf_callback_param *VAR_6 = VAR_5;
 struct line_finder *VAR_7 = VAR_6->data;
 struct line_range *VAR_8 = VAR_7->lr;


 if (VAR_8->file && FUNC_8(VAR_8->file, FUNC_4(VAR_4)))
  return VAR_1;

 if (FUNC_0(VAR_4) &&
     FUNC_2(VAR_4, VAR_8->function)) {
  VAR_7->fname = FUNC_4(VAR_4);
  FUNC_5(VAR_4, &VAR_8->offset);
  FUNC_7("fname: %s, lineno:%d\n", VAR_7->fname, VAR_8->offset);
  VAR_7->lno_s = VAR_8->offset + VAR_8->start;
  if (VAR_7->lno_s < 0)
   VAR_7->lno_s = VAR_2;
  VAR_7->lno_e = VAR_8->offset + VAR_8->end;
  if (VAR_7->lno_e < 0)
   VAR_7->lno_e = VAR_2;
  FUNC_7("New line range: %d to %d\n", VAR_7->lno_s, VAR_7->lno_e);
  VAR_8->start = VAR_7->lno_s;
  VAR_8->end = VAR_7->lno_e;
  if (!FUNC_1(VAR_4))
   VAR_6->retval = FUNC_3(VAR_4,
      VAR_3, VAR_7);
  else
   VAR_6->retval = FUNC_6(VAR_4, VAR_7);
  return VAR_0;
 }
 return VAR_1;
}
