
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int wchar_t ;
typedef int uint8 ;
struct stream {int size; int * data; int * p; } ;
struct TYPE_6__ {int disconnect_reason; scalar_t__ encryption; } ;
typedef TYPE_1__ RDPCLIENT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,char*,char*,struct stream*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,struct stream*,int *) ;

BOOL
FUNC_5(RDPCLIENT * VAR_2, char *VAR_3, wchar_t *VAR_4, char *VAR_5)
{
 struct stream VAR_6;
 void * VAR_7 = FUNC_1(512);

 if(VAR_7 == ((void*)0))
 {
  VAR_2->disconnect_reason = 262;
  return VAR_0;
 }


 VAR_6.size = 512;
 VAR_6.p = VAR_6.data = (uint8 *) VAR_7;
 FUNC_4(VAR_2, &VAR_6, VAR_4);

 if (!FUNC_2(VAR_2, VAR_3, VAR_5, &VAR_6))
  return VAR_0;


 if (VAR_2->encryption)
  FUNC_3(VAR_2);
 FUNC_0(VAR_6.data);
 return VAR_1;
}
