
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rose_sock {int rand; int source_ndigis; int dest_ndigis; char* source_digis; char* dest_digis; char dest_addr; char source_addr; int source_call; int dest_call; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 char* FUNC_0 (char*,int *) ;
 int FUNC_1 (unsigned char*,char*,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(unsigned char *VAR_12, struct rose_sock *VAR_13)
{
 unsigned char *VAR_14 = VAR_12 + 1;
 char *VAR_15;
 char VAR_16[11];
 int VAR_17, VAR_18;


 if (VAR_13->rand != 0 || VAR_13->source_ndigis == 1 || VAR_13->dest_ndigis == 1) {
  *VAR_14++ = 0x00;
  *VAR_14++ = VAR_5;

  if (VAR_13->rand != 0) {
   *VAR_14++ = VAR_8;
   *VAR_14++ = (VAR_13->rand >> 8) & 0xFF;
   *VAR_14++ = (VAR_13->rand >> 0) & 0xFF;
  }


  if ((VAR_13->source_ndigis > 0) || (VAR_13->dest_ndigis > 0)) {
   int VAR_19 = 0;
   *VAR_14++ = VAR_7;
   *VAR_14++ = VAR_0 * (VAR_13->source_ndigis + VAR_13->dest_ndigis);
   for (VAR_18 = 0 ; VAR_18 < VAR_13->source_ndigis ; VAR_18++) {
    if (++VAR_19 >= VAR_11)
     break;
    FUNC_1(VAR_14, &VAR_13->source_digis[VAR_18], VAR_0);
    VAR_14[6] |= VAR_1;
    VAR_14 += VAR_0;
   }
   for (VAR_18 = 0 ; VAR_18 < VAR_13->dest_ndigis ; VAR_18++) {
    if (++VAR_19 >= VAR_11)
     break;
    FUNC_1(VAR_14, &VAR_13->dest_digis[VAR_18], VAR_0);
    VAR_14[6] &= ~VAR_1;
    VAR_14 += VAR_0;
   }
  }


  if (VAR_13->source_ndigis > 0) {
   *VAR_14++ = VAR_9;
   *VAR_14++ = VAR_0;
   FUNC_1(VAR_14, &VAR_13->source_digis[0], VAR_0);
   VAR_14 += VAR_0;
  }


  if (VAR_13->dest_ndigis > 0) {
   *VAR_14++ = VAR_6;
   *VAR_14++ = VAR_0;
   FUNC_1(VAR_14, &VAR_13->dest_digis[0], VAR_0);
   VAR_14 += VAR_0;
  }
 }

 *VAR_14++ = 0x00;
 *VAR_14++ = VAR_2;

 *VAR_14++ = VAR_3;

 VAR_15 = FUNC_0(VAR_16, &VAR_13->dest_call);

 *VAR_14++ = FUNC_2(VAR_15) + 10;
 *VAR_14++ = (FUNC_2(VAR_15) + 9) * 2;

 *VAR_14++ = 0x47; *VAR_14++ = 0x00; *VAR_14++ = 0x11;
 *VAR_14++ = VAR_10 * 2;
 FUNC_1(VAR_14, &VAR_13->dest_addr, VAR_10);
 VAR_14 += VAR_10;

 FUNC_1(VAR_14, VAR_15, FUNC_2(VAR_15));
 VAR_14 += FUNC_2(VAR_15);

 *VAR_14++ = VAR_4;

 VAR_15 = FUNC_0(VAR_16, &VAR_13->source_call);

 *VAR_14++ = FUNC_2(VAR_15) + 10;
 *VAR_14++ = (FUNC_2(VAR_15) + 9) * 2;

 *VAR_14++ = 0x47; *VAR_14++ = 0x00; *VAR_14++ = 0x11;
 *VAR_14++ = VAR_10 * 2;
 FUNC_1(VAR_14, &VAR_13->source_addr, VAR_10);
 VAR_14 += VAR_10;

 FUNC_1(VAR_14, VAR_15, FUNC_2(VAR_15));
 VAR_14 += FUNC_2(VAR_15);

 VAR_17 = VAR_14 - VAR_12;
 VAR_12[0] = VAR_17 - 1;

 return VAR_17;
}
