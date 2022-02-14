
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int z_crc_t ;


 unsigned long FUNC_0 (unsigned long,int) ;

__attribute__((used)) static int FUNC_1(unsigned long* VAR_0,const z_crc_t* VAR_1,int VAR_2)
{
    (*(VAR_0+0)) = FUNC_0((*(VAR_0+0)), VAR_2);
    (*(VAR_0+1)) += (*(VAR_0+0)) & 0xff;
    (*(VAR_0+1)) = (*(VAR_0+1)) * 134775813L + 1;
    {
      register int VAR_3 = (int)((*(VAR_0+1)) >> 24);
      (*(VAR_0+2)) = FUNC_0((*(VAR_0+2)), VAR_3);
    }
    return VAR_2;
}
