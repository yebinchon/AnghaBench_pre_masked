
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int len ;
struct TYPE_3__ {int myfile; } ;
typedef TYPE_1__ Tuplestorestate ;


 size_t FUNC_0 (int ,void*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;

__attribute__((used)) static unsigned int
FUNC_4(Tuplestorestate *VAR_1, bool VAR_2)
{
 unsigned int VAR_3;
 size_t VAR_4;

 VAR_4 = FUNC_0(VAR_1->myfile, (void *) &VAR_3, sizeof(VAR_3));
 if (VAR_4 == sizeof(VAR_3))
  return VAR_3;
 if (VAR_4 != 0 || !VAR_2)
  FUNC_1(VAR_0,
    (FUNC_2(),
     FUNC_3("could not read from tuplestore temporary file: %m")));
 return 0;
}
