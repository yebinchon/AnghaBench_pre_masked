
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int (* fz_bidi_fragment_fn ) (int const*,size_t,int,int,void*) ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*,size_t,int,int,void*) ;
 int FUNC_1 (int const*,size_t,int,int,void*) ;
 int FUNC_2 (int const) ;

__attribute__((used)) static void
FUNC_3(const uint32_t *VAR_2,
  size_t VAR_3,
  int VAR_4,
  void *VAR_5,
  fz_bidi_fragment_fn *VAR_6)
{
 int VAR_7 = VAR_0;
 size_t VAR_8, VAR_9;

 VAR_8 = 0;
 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
 {
  int VAR_10 = FUNC_2(VAR_2[VAR_9]);
  if (VAR_10 == VAR_0 || VAR_10 == VAR_1)
  {

  }
  else if (VAR_10 == VAR_7)
  {

  }
  else if (VAR_7 == VAR_0 || VAR_7 == VAR_1)
  {

   VAR_7 = VAR_10;
  }
  else
  {

   (*VAR_6)(&VAR_2[VAR_8], VAR_9 - VAR_8, VAR_4, VAR_7, VAR_5);
   VAR_8 = VAR_9;
   VAR_7 = VAR_10;
  }
 }
 if (VAR_8 != VAR_3)
 {
  (*VAR_6)(&VAR_2[VAR_8], VAR_3 - VAR_8, VAR_4, VAR_7, VAR_5);
 }
}
