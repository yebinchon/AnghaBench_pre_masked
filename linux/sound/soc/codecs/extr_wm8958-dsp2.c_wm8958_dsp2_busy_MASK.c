
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8994_priv {scalar_t__* hpf2_ena; scalar_t__* hpf1_ena; scalar_t__* vss_ena; scalar_t__* mbc_ena; } ;


 int FUNC_0 (scalar_t__*) ;

__attribute__((used)) static int FUNC_1(struct wm8994_priv *VAR_0, int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0->mbc_ena); VAR_2++) {
  if (VAR_2 == VAR_1)
   continue;
  if (VAR_0->mbc_ena[VAR_2] || VAR_0->vss_ena[VAR_2] ||
      VAR_0->hpf1_ena[VAR_2] || VAR_0->hpf2_ena[VAR_2])
   return 1;
 }

 return 0;
}
