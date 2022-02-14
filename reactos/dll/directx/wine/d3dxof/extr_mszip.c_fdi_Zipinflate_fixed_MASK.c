
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Ziphuft {int dummy; } ;
typedef int fdi_decomp_state ;
typedef int cab_ULONG ;
typedef int cab_LONG ;


 int FUNC_0 (int ) ;
 int* FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int*,int,int,int ,int ,struct Ziphuft**,int*,int *) ;
 int FUNC_3 (int ,struct Ziphuft*) ;
 int FUNC_4 (struct Ziphuft*,struct Ziphuft*,int,int,int *) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static cab_LONG FUNC_5(fdi_decomp_state *VAR_6)
{
  struct Ziphuft *VAR_7;
  struct Ziphuft *VAR_8;
  cab_LONG VAR_9, VAR_10;
  cab_LONG VAR_11;
  cab_ULONG *VAR_12;

  VAR_12 = FUNC_1(VAR_5);


  for(VAR_11 = 0; VAR_11 < 144; VAR_11++)
    VAR_12[VAR_11] = 8;
  for(; VAR_11 < 256; VAR_11++)
    VAR_12[VAR_11] = 9;
  for(; VAR_11 < 280; VAR_11++)
    VAR_12[VAR_11] = 7;
  for(; VAR_11 < 288; VAR_11++)
    VAR_12[VAR_11] = 8;
  VAR_9 = 7;
  if((VAR_11 = FUNC_2(VAR_12, 288, 257, VAR_2, VAR_3, &VAR_7, &VAR_9, VAR_6)))
    return VAR_11;


  for(VAR_11 = 0; VAR_11 < 30; VAR_11++)
    VAR_12[VAR_11] = 5;
  VAR_10 = 5;
  if((VAR_11 = FUNC_2(VAR_12, 30, 0, VAR_1, VAR_0, &VAR_8, &VAR_10, VAR_6)) > 1)
  {
    FUNC_3(FUNC_0(VAR_4), VAR_7);
    return VAR_11;
  }


  VAR_11 = FUNC_4(VAR_7, VAR_8, VAR_9, VAR_10, VAR_6);

  FUNC_3(FUNC_0(VAR_4), VAR_8);
  FUNC_3(FUNC_0(VAR_4), VAR_7);
  return VAR_11;
}
