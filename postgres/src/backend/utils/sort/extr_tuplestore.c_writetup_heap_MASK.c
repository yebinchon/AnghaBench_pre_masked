
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tuplen ;
struct TYPE_7__ {int myfile; scalar_t__ backward; } ;
typedef TYPE_1__ Tuplestorestate ;
struct TYPE_8__ {int t_len; } ;
typedef TYPE_2__* MinimalTuple ;


 int FUNC_0 (int ,void*,int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_7(Tuplestorestate *VAR_2, void *VAR_3)
{
 MinimalTuple VAR_4 = (MinimalTuple) VAR_3;


 char *VAR_5 = (char *) VAR_4 + VAR_1;
 unsigned int VAR_6 = VAR_4->t_len - VAR_1;


 unsigned int VAR_7 = VAR_6 + sizeof(int);

 if (FUNC_0(VAR_2->myfile, (void *) &VAR_7,
      sizeof(VAR_7)) != sizeof(VAR_7))
  FUNC_3(VAR_0,
    (FUNC_4(),
     FUNC_5("could not write to tuplestore temporary file: %m")));
 if (FUNC_0(VAR_2->myfile, (void *) VAR_5,
      VAR_6) != (size_t) VAR_6)
  FUNC_3(VAR_0,
    (FUNC_4(),
     FUNC_5("could not write to tuplestore temporary file: %m")));
 if (VAR_2->backward)
  if (FUNC_0(VAR_2->myfile, (void *) &VAR_7,
       sizeof(VAR_7)) != sizeof(VAR_7))
   FUNC_3(VAR_0,
     (FUNC_4(),
      FUNC_5("could not write to tuplestore temporary file: %m")));

 FUNC_1(VAR_2, FUNC_2(VAR_4));
 FUNC_6(VAR_4);
}
