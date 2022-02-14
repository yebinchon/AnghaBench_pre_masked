
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sample_read_value {int value; int id; } ;
typedef int PyObject ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static PyObject *FUNC_4(struct sample_read_value *VAR_0)
{
 PyObject *VAR_1;

 VAR_1 = FUNC_1(2);
 if (!VAR_1)
  FUNC_3("couldn't create Python tuple");
 FUNC_2(VAR_1, 0, FUNC_0(VAR_0->id));
 FUNC_2(VAR_1, 1, FUNC_0(VAR_0->value));
 return VAR_1;
}
