
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int various; int close; } ;
typedef TYPE_1__ stbfile ;
typedef int FILE ;


 int VAR_0 ;
 int * FUNC_0 (char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (int *) ;

stbfile *FUNC_2(char *VAR_3, char *VAR_4)
{
   FILE *VAR_5 = FUNC_0(VAR_3, VAR_4[0] == 'k' ? VAR_4+1 : VAR_4);
   stbfile *VAR_6;
   if (VAR_5 == ((void*)0)) return ((void*)0);
   VAR_6 = FUNC_1(VAR_5);
   if (VAR_6) {
      VAR_6->close = VAR_0;
      VAR_6->various = VAR_4[0] == 'k' ? VAR_1 : VAR_2;
   }
   return VAR_6;
}
