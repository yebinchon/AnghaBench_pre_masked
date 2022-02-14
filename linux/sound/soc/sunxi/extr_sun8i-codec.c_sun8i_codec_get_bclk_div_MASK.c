
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct sun8i_codec_clk_div {unsigned int val; scalar_t__ div; } ;
struct sun8i_codec {int clk_module; } ;


 int FUNC_0 (struct sun8i_codec_clk_div*) ;
 unsigned int FUNC_1 (scalar_t__) ;
 unsigned long FUNC_2 (int ) ;
 struct sun8i_codec_clk_div* VAR_0 ;

__attribute__((used)) static u8 FUNC_3(struct sun8i_codec *VAR_1,
       unsigned int VAR_2,
       unsigned int VAR_3)
{
 unsigned long VAR_4 = FUNC_2(VAR_1->clk_module);
 unsigned int VAR_5 = VAR_4 / VAR_2 / VAR_3 / 2;
 unsigned int VAR_6 = 0, VAR_7 = ~0;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_0); VAR_8++) {
  const struct sun8i_codec_clk_div *VAR_9 = &VAR_0[VAR_8];
  unsigned int VAR_10 = FUNC_1(VAR_9->div - VAR_5);

  if (VAR_10 < VAR_7) {
   VAR_7 = VAR_10;
   VAR_6 = VAR_9->val;
  }
 }

 return VAR_6;
}
