
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,int **) ;

int FUNC_5(int VAR_0, char *VAR_1[])
{
 wchar_t ** VAR_2;
 int VAR_3;
 int VAR_4;

 VAR_2 = (wchar_t **) FUNC_0(
    sizeof(void*) * VAR_0,
    0
    );
 for(VAR_3=0;VAR_3<VAR_0;++VAR_3)
 {
  VAR_2[VAR_3] = (wchar_t*) FUNC_0(
    sizeof(wchar_t) * (1+FUNC_3(VAR_1[VAR_3])),
    0
    );
  FUNC_2(VAR_1[VAR_3],VAR_2[VAR_3]);
 }
 VAR_2[VAR_3] = ((void*)0);
 VAR_4 = FUNC_4(VAR_0,VAR_2);
 for (VAR_3=0;VAR_2[VAR_3];++VAR_3) FUNC_1(VAR_2[VAR_3]);
 return VAR_4;
}
