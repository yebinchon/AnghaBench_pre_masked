
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 size_t* VAR_0 ;
 int const* VAR_1 ;

__attribute__((used)) static unsigned int FUNC_0(unsigned long VAR_2)
{
 const u8 *VAR_3;
 int VAR_4;





 VAR_3 = &VAR_1[VAR_0[VAR_2 >> 8]];







 for (VAR_4 = 0; VAR_4 < (VAR_2 & 0xFF); VAR_4++)
  VAR_3 = VAR_3 + (*VAR_3) + 1;

 return VAR_3 - VAR_1;
}
