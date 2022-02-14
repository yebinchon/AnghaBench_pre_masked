
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* buffer; int * buf_ptr; } ;
typedef int TCCState ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char const*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,char*,int) ;

void FUNC_6(TCCState *VAR_2, const char *VAR_3, const char *VAR_4)
{
 int VAR_5, VAR_6;

 if (!VAR_4) {
  VAR_4 = "1";
 }
 VAR_5 = FUNC_3 (VAR_3);
 VAR_6 = FUNC_3 (VAR_4);


 FUNC_5 (VAR_2, "<define>", VAR_5 + VAR_6 + 1);
 FUNC_0 (VAR_1->buffer, VAR_3, VAR_5);
 VAR_1->buffer[VAR_5] = ' ';
 FUNC_0 (VAR_1->buffer + VAR_5 + 1, VAR_4, VAR_6);


 VAR_0 = VAR_1->buf_ptr[0];
 FUNC_1 ();
 FUNC_2 ();

 FUNC_4 ();
}
