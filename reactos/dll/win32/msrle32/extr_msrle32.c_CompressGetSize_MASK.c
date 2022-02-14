
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LRESULT ;
typedef int * LPCBITMAPINFOHEADER ;
typedef int CodecInfo ;


 scalar_t__ FUNC_0 (int *,int *,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int *,int *,int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static LRESULT FUNC_4(CodecInfo *VAR_1, LPCBITMAPINFOHEADER VAR_2,
          LPCBITMAPINFOHEADER VAR_3)
{

  FUNC_3(VAR_1 != ((void*)0));

  FUNC_2("(%p,%p,%p)\n",VAR_1,VAR_2,VAR_3);


  if (VAR_2 == ((void*)0) && VAR_3 == ((void*)0))
    return 0;

  if (FUNC_0(VAR_1, VAR_2, VAR_3) != VAR_0)
    return 0;


  if (VAR_2)
    return FUNC_1(VAR_2);
  else
    return FUNC_1(VAR_3);
}
