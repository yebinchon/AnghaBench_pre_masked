
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int * connection; } ;
typedef int PGconn ;


 struct connection* FUNC_0 (char const*) ;

PGconn *
FUNC_1(const char *VAR_0)
{
 struct connection *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1 == ((void*)0))
  return ((void*)0);

 return VAR_1->connection;
}
