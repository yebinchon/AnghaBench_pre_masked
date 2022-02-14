
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVCodecDescriptor ;


 int VAR_0 ;
 int ** FUNC_0 (unsigned int,int) ;
 int FUNC_1 (int *,int ,char*,unsigned int) ;
 int * FUNC_2 (int const*) ;

__attribute__((used)) static bool FUNC_3(const AVCodecDescriptor ***VAR_1, unsigned int *VAR_2)
{
 const AVCodecDescriptor *VAR_3 = ((void*)0);
 const AVCodecDescriptor **VAR_4;
 unsigned int VAR_5 = 0;
 unsigned int VAR_6 = 0;

 while ((VAR_3 = FUNC_2(VAR_3)) != ((void*)0))
  VAR_5++;

 VAR_4 = FUNC_0(VAR_5, sizeof(AVCodecDescriptor *));

 if (VAR_4 == ((void*)0)) {
  FUNC_1(((void*)0), VAR_0,
         "unable to allocate sorted codec "
         "array with size %d",
         VAR_5);
  return 0;
 }

 while ((VAR_3 = FUNC_2(VAR_3)) != ((void*)0))
  VAR_4[VAR_6++] = VAR_3;

 *VAR_2 = VAR_5;
 *VAR_1 = VAR_4;
 return 1;
}
