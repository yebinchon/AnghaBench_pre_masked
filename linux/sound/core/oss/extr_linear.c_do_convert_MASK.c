
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linear_priv {int copy_ofs; int src_ofs; unsigned int flip; int dst_ofs; int dst_bytes; scalar_t__ cvt_endian; int copy_bytes; } ;


 int FUNC_0 (unsigned char*,unsigned char*,int ) ;
 unsigned int FUNC_1 (unsigned int) ;

__attribute__((used)) static inline void FUNC_2(struct linear_priv *VAR_0,
         unsigned char *VAR_1, unsigned char *VAR_2)
{
 unsigned int VAR_3 = 0;
 unsigned char *VAR_4 = (unsigned char *)&VAR_3;

 FUNC_0(VAR_4 + VAR_0->copy_ofs, VAR_2 + VAR_0->src_ofs, VAR_0->copy_bytes);
 if (VAR_0->cvt_endian)
  VAR_3 = FUNC_1(VAR_3);
 VAR_3 ^= VAR_0->flip;
 FUNC_0(VAR_1, VAR_4 + VAR_0->dst_ofs, VAR_0->dst_bytes);
}
