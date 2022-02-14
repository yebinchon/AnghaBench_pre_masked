
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int hash_ctl ;
struct TYPE_4__ {int keysize; int entrysize; } ;
typedef int PyObject ;
typedef int PLyExceptionEntry ;
typedef TYPE_1__ HASHCTL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (char*,int *,int *,char*,int *) ;
 int FUNC_1 (int ,char*) ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int FUNC_2 (int *,void*) ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (int *,char*,int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,int,TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void
FUNC_9(PyObject *VAR_9)
{
 PyObject *VAR_10;
 HASHCTL VAR_11;


 VAR_10 = FUNC_6("spiexceptions", VAR_5);



 if (VAR_10 == ((void*)0))
  FUNC_1(VAR_0, "could not create the spiexceptions module");





 FUNC_5(VAR_10);
 if (FUNC_3(VAR_9, "spiexceptions", VAR_10) < 0)
  FUNC_1(VAR_0, "could not add the spiexceptions module");

 VAR_3 = FUNC_0("plpy.Error", ((void*)0), ((void*)0),
           "Error", VAR_9);
 VAR_4 = FUNC_0("plpy.Fatal", ((void*)0), ((void*)0),
           "Fatal", VAR_9);
 VAR_7 = FUNC_0("plpy.SPIError", ((void*)0), ((void*)0),
            "SPIError", VAR_9);

 FUNC_8(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.keysize = sizeof(int);
 VAR_11.entrysize = sizeof(PLyExceptionEntry);
 VAR_8 = FUNC_7("PL/Python SPI exceptions", 256,
          &VAR_11, VAR_2 | VAR_1);

 FUNC_2(VAR_10, VAR_7);
}
