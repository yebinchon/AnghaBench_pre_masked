
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int verbosity; } ;
typedef TYPE_1__ PGconn ;
typedef int PGVerbosity ;


 int VAR_0 ;

PGVerbosity
FUNC_0(PGconn *VAR_1, PGVerbosity VAR_2)
{
 PGVerbosity VAR_3;

 if (!VAR_1)
  return VAR_0;
 VAR_3 = VAR_1->verbosity;
 VAR_1->verbosity = VAR_2;
 return VAR_3;
}
