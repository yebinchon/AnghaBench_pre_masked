
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tuplen ;
struct TYPE_6__ {int myfile; scalar_t__ backward; } ;
typedef TYPE_1__ Tuplestorestate ;
struct TYPE_7__ {unsigned int t_len; } ;
typedef TYPE_2__* MinimalTuple ;


 int FUNC_0 (int ,void*,int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 unsigned int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 int FUNC_6 (unsigned int) ;

__attribute__((used)) static void *
FUNC_7(Tuplestorestate *VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4 = VAR_3 - sizeof(int);
 unsigned int VAR_5 = VAR_4 + VAR_1;
 MinimalTuple VAR_6 = (MinimalTuple) FUNC_6(VAR_5);
 char *VAR_7 = (char *) VAR_6 + VAR_1;

 FUNC_2(VAR_2, FUNC_1(VAR_6));

 VAR_6->t_len = VAR_5;
 if (FUNC_0(VAR_2->myfile, (void *) VAR_7,
     VAR_4) != (size_t) VAR_4)
  FUNC_3(VAR_0,
    (FUNC_4(),
     FUNC_5("could not read from tuplestore temporary file: %m")));
 if (VAR_2->backward)
  if (FUNC_0(VAR_2->myfile, (void *) &VAR_5,
      sizeof(VAR_5)) != sizeof(VAR_5))
   FUNC_3(VAR_0,
     (FUNC_4(),
      FUNC_5("could not read from tuplestore temporary file: %m")));
 return (void *) VAR_6;
}
