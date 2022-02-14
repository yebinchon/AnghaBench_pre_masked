
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int D3DVALUE ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;

__attribute__((used)) static inline D3DVALUE FUNC_1 (D3DVALUE VAR_1)
{
 D3DVALUE VAR_2;
 VAR_2 = VAR_1 * (360/(2*VAR_0));
 FUNC_0("%f rad = %f deg\n", VAR_1, VAR_2);
 return VAR_2;
}
