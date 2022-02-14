
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int connection; } ;
typedef int PGTransactionStatusType ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct connection* FUNC_1 (char const*) ;

PGTransactionStatusType
FUNC_2(const char *VAR_1)
{
 const struct connection *VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 == ((void*)0))
 {

  return VAR_0;
 }

 return FUNC_0(VAR_2->connection);

}
