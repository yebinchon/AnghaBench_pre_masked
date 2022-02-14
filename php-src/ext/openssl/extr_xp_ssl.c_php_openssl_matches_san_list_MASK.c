
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zend_bool ;
typedef int X509 ;
struct TYPE_6__ {TYPE_1__* iPAddress; int dNSName; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_2__ d; } ;
struct TYPE_5__ {int length; int* data; } ;
typedef int GENERAL_NAMES ;
typedef TYPE_3__ GENERAL_NAME ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (unsigned char**,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (unsigned char*) ;
 int * FUNC_3 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_4 (char const*,char const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 TYPE_3__* FUNC_7 (int *,int) ;
 int FUNC_8 (char*,char*,int,int,int,int) ;
 scalar_t__ FUNC_9 (char const*,char const*) ;
 scalar_t__ FUNC_10 (char const*,char*) ;
 size_t FUNC_11 (char const*) ;

__attribute__((used)) static zend_bool FUNC_12(X509 *VAR_4, const char *VAR_5)
{
 int VAR_6, VAR_7;
 unsigned char *VAR_8 = ((void*)0);
 char VAR_9[64];

 GENERAL_NAMES *VAR_10 = FUNC_3(VAR_4, VAR_3, 0, 0);
 int VAR_11 = FUNC_5(VAR_10);

 for (VAR_6 = 0; VAR_6 < VAR_11; VAR_6++) {
  GENERAL_NAME *VAR_12 = FUNC_7(VAR_10, VAR_6);

  if (VAR_12->type == VAR_1) {
   FUNC_1(&VAR_8, VAR_12->d.dNSName);
   if ((size_t)FUNC_0(VAR_12->d.dNSName) != FUNC_11((const char*)VAR_8)) {
    FUNC_2(VAR_8);

    continue;
   }


   VAR_7 = FUNC_11((const char*)VAR_8);
   if (VAR_7 && FUNC_10((const char *)&VAR_8[VAR_7-1], ".") == 0) {
    VAR_8[VAR_7-1] = '\0';
   }

   if (FUNC_4(VAR_5, (const char *)VAR_8)) {
    FUNC_2(VAR_8);
    FUNC_6(VAR_10, VAR_0);

    return 1;
   }
   FUNC_2(VAR_8);
  } else if (VAR_12->type == VAR_2) {
   if (VAR_12->d.iPAddress->length == 4) {
    FUNC_8(VAR_9, "%d.%d.%d.%d",
     VAR_12->d.iPAddress->data[0],
     VAR_12->d.iPAddress->data[1],
     VAR_12->d.iPAddress->data[2],
     VAR_12->d.iPAddress->data[3]
    );
    if (FUNC_9(VAR_5, (const char*)VAR_9) == 0) {
     FUNC_6(VAR_10, VAR_0);

     return 1;
    }
   }




  }
 }

 FUNC_6(VAR_10, VAR_0);

 return 0;
}
