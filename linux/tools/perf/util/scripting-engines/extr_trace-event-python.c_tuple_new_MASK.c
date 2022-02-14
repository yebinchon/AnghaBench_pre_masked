
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;


 int * FUNC_0 (unsigned int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static PyObject *FUNC_2(unsigned int VAR_0)
{
 PyObject *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (!VAR_1)
  FUNC_1("couldn't create Python tuple");
 return VAR_1;
}
