
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tx_desc {unsigned int sdp; int pmap; int config0; } ;
struct sw {int dev; } ;
struct _tx_ring {unsigned int* phys_tab; struct tx_desc* desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int ,void*,int,int ) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct sw *VAR_4, struct _tx_ring *VAR_5, int VAR_6,
    int VAR_7, void *VAR_8, int VAR_9, u32 VAR_10,
    u32 VAR_11)
{
 struct tx_desc *VAR_12 = &(VAR_5)->desc[VAR_6];
 unsigned int VAR_13;

 VAR_13 = FUNC_0(VAR_4->dev, VAR_8, VAR_9, VAR_0);
 VAR_12->sdp = VAR_13;
 VAR_12->pmap = VAR_11;
 VAR_5->phys_tab[VAR_6] = VAR_13;

 VAR_10 |= VAR_9;

 if (VAR_6 == VAR_3 - 1)
  VAR_10 |= VAR_1;

 if (VAR_6 == VAR_7)
  VAR_10 |= VAR_2;

 FUNC_1();
 VAR_12->config0 = VAR_10;
}
