
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ zend_bool ;
typedef int uint32_t ;
struct TYPE_5__ {scalar_t__ s; int member_0; } ;
typedef TYPE_1__ smart_str ;
typedef int MYSQL ;


 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char*,size_t) ;
 char* FUNC_3 (char const* const) ;
 int FUNC_4 (int *,TYPE_1__*,int const) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 size_t FUNC_7 (char**,int ,char*,char*,char*) ;

__attribute__((used)) static int FUNC_8(MYSQL * VAR_0, zend_bool VAR_1, const uint32_t VAR_2, const char * const VAR_3)
{
 int VAR_4;
 smart_str VAR_5 = {0};
 FUNC_4(VAR_0, &VAR_5, VAR_2);
 FUNC_5(&VAR_5);

 {
  char *VAR_6;
  char *VAR_7 = FUNC_3(VAR_3);
  size_t VAR_8;

  VAR_8 = FUNC_7(&VAR_6, 0,
    (VAR_1? "COMMIT%s %s":"ROLLBACK%s %s"), VAR_7? VAR_7:"", VAR_5.s? FUNC_0(VAR_5.s):"");
  FUNC_6(&VAR_5);
  if (VAR_7) {
   FUNC_1(VAR_7);
   VAR_7 = ((void*)0);
  }

  VAR_4 = FUNC_2(VAR_0, VAR_6, VAR_8);
  FUNC_1(VAR_6);
 }
 return VAR_4;
}
