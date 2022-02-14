
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __m128 ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int const,int const,int const,int const) ;
 int FUNC_2 (float const*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (float,float,float,float) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (float,int ) ;

__attribute__((used)) static float FUNC_7(__m128 VAR_0, const float *VAR_1,
      size_t VAR_2)
{



 const __m128 VAR_3 =
  FUNC_4(-0.155915f, 0.935489f, 0.233872f, -0.103943f);
 const __m128 VAR_4 =
  FUNC_4(-0.216236f, 0.756827f, 0.504551f, -0.189207f);
 const __m128 VAR_5 =
  FUNC_4(-0.189207f, 0.504551f, 0.756827f, -0.216236f);
 const __m128 VAR_6 =
  FUNC_4(-0.103943f, 0.233872f, 0.935489f, -0.155915f);

 __m128 VAR_7 = VAR_0;
 __m128 VAR_8 = VAR_0;
 for (size_t VAR_9 = 0; (VAR_9 + 3) < VAR_2; VAR_9 += 4) {
  __m128 VAR_10 = FUNC_2(&VAR_1[VAR_9]);
  __m128 VAR_11;


  __m128 VAR_12 = FUNC_5(VAR_10);
  VAR_8 = FUNC_3(VAR_8, VAR_12);


  FUNC_0(VAR_10, VAR_7);
  FUNC_1(VAR_11, VAR_7, VAR_3, VAR_4, VAR_5, VAR_6);
  VAR_8 = FUNC_3(VAR_8, FUNC_5(VAR_11));

  FUNC_0(VAR_10, VAR_7);
  FUNC_1(VAR_11, VAR_7, VAR_3, VAR_4, VAR_5, VAR_6);
  VAR_8 = FUNC_3(VAR_8, FUNC_5(VAR_11));

  FUNC_0(VAR_10, VAR_7);
  FUNC_1(VAR_11, VAR_7, VAR_3, VAR_4, VAR_5, VAR_6);
  VAR_8 = FUNC_3(VAR_8, FUNC_5(VAR_11));

  FUNC_0(VAR_10, VAR_7);
  FUNC_1(VAR_11, VAR_7, VAR_3, VAR_4, VAR_5, VAR_6);
  VAR_8 = FUNC_3(VAR_8, FUNC_5(VAR_11));
 }

 float VAR_13;
 FUNC_6(VAR_13, VAR_8);
 return VAR_13;
}
