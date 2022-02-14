
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct keyring_index_key {char* description; int desc_len; unsigned long hash; int * type; scalar_t__ domain_tag; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*,char const*,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(struct keyring_index_key *VAR_4)
{
 const unsigned VAR_5 = VAR_2;
 const unsigned long VAR_6 = VAR_0;
 const char *VAR_7 = VAR_4->description;
 unsigned long VAR_8, VAR_9;
 u32 VAR_10;
 u64 VAR_11;
 int VAR_12, VAR_13 = VAR_4->desc_len;

 VAR_9 = (unsigned long)VAR_4->type;
 VAR_11 = FUNC_1(VAR_9, VAR_13 + 13);
 VAR_11 = FUNC_1(VAR_11, 9207);
 VAR_10 = (unsigned long)VAR_4->domain_tag;
 VAR_11 = FUNC_1(VAR_11, VAR_10);
 VAR_11 = FUNC_1(VAR_11, 9207);

 for (;;) {
  VAR_12 = VAR_13;
  if (VAR_12 <= 0)
   break;
  if (VAR_12 > 4)
   VAR_12 = 4;
  VAR_10 = 0;
  FUNC_0(&VAR_10, VAR_7, VAR_12);
  VAR_7 += VAR_12;
  VAR_13 -= VAR_12;
  VAR_11 = FUNC_1(VAR_11, VAR_10);
  VAR_11 = FUNC_1(VAR_11, 9207);
 }


 VAR_8 = VAR_11;
 if (VAR_1 == 32)
  VAR_8 ^= VAR_11 >> 32;





 if (VAR_4->type != &VAR_3 && (VAR_8 & VAR_6) == 0)
  VAR_8 |= (VAR_8 >> (VAR_1 - VAR_5)) | 1;
 else if (VAR_4->type == &VAR_3 && (VAR_8 & VAR_6) != 0)
  VAR_8 = (VAR_8 + (VAR_8 << VAR_5)) & ~VAR_6;
 VAR_4->hash = VAR_8;
}
