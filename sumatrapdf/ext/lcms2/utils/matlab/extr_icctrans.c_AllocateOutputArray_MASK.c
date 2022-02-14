
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mxArray ;


 int FUNC_0 (int*,int const*,int) ;

 int * FUNC_1 (int const*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int const*) ;
 int* FUNC_4 (int const*) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int *) ;


 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int *,int*,int) ;
 int FUNC_10 (int *,int ) ;



__attribute__((used)) static
mxArray* FUNC_11(const mxArray* VAR_0, int VAR_1)
{

 mxArray* VAR_2 = FUNC_1(VAR_0);
 int VAR_3 = FUNC_5(VAR_0);
 const int* VAR_4 = FUNC_4(VAR_0);
 int VAR_5 = VAR_4[VAR_3-1];




 if (VAR_5 != VAR_1) {


  int VAR_6, VAR_7;
  int *VAR_8 = (int*) FUNC_7(VAR_3 * sizeof(int));


  FUNC_0(VAR_8, VAR_4, VAR_3 * sizeof(int));
  VAR_8[VAR_3 - 1] = VAR_1;

  switch (FUNC_3(VAR_0)) {

  case 130: VAR_7 = sizeof(char); break;
  case 128: VAR_7 = sizeof(unsigned char); break;
  case 131: VAR_7 = sizeof(short); break;
  case 129: VAR_7 = sizeof(unsigned short); break;

  default:
  case 132: VAR_7 = sizeof(double); break;
  }



  for (VAR_6=0; VAR_6 < VAR_3; VAR_6++)
   VAR_7 *= VAR_8[VAR_6];


  FUNC_9(VAR_2, VAR_8, VAR_3);
  FUNC_2(VAR_8);

  FUNC_10(VAR_2, FUNC_8(FUNC_6(VAR_2), VAR_7));

 }


 return VAR_2;
}
