
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zend_bool ;
typedef int MYSQL ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,unsigned int) ;
 unsigned int FUNC_2 (char**,int ,char*,char const* const) ;

__attribute__((used)) static int FUNC_3(MYSQL * VAR_0, const char * const VAR_1, zend_bool VAR_2)
{
 int VAR_3;
 char * VAR_4;
 unsigned int VAR_5 = FUNC_2(&VAR_4, 0, VAR_2? "RELEASE SAVEPOINT `%s`":"SAVEPOINT `%s`", VAR_1);
 VAR_3 = FUNC_1(VAR_0, VAR_4, VAR_5);
 FUNC_0(VAR_4);
 return VAR_3;
}
