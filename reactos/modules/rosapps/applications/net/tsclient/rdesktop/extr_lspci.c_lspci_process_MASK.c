
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int end; unsigned int p; } ;
typedef TYPE_1__* STREAM ;
typedef int RDPCLIENT ;


 int FUNC_0 (char*,char*,unsigned int) ;
 int FUNC_1 (unsigned int,unsigned int) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,char*,char**,int ,int *) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (unsigned int) ;

__attribute__((used)) static void
FUNC_6(RDPCLIENT * VAR_1, STREAM VAR_2)
{
 unsigned int VAR_3;
 static char *VAR_4 = ((void*)0);
 char *VAR_5;

 VAR_3 = VAR_2->end - VAR_2->p;

 VAR_5 = FUNC_5(VAR_3 + 1);
 FUNC_0(VAR_5, (char *) VAR_2->p, VAR_3 + 1);





 FUNC_3(VAR_1, VAR_5, &VAR_4, VAR_0, ((void*)0));
 FUNC_4(VAR_5);
}
