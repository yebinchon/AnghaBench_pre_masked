
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct pprint_mapv_int128 {int bits80; int ui128; scalar_t__ bits3; scalar_t__ si128b; scalar_t__ si128a; } ;
struct pprint_mapv {int ui32; int si32; int unused_bits2a; int bits28; int unused_bits2b; int ui64; int* ui8a; size_t aenum; int ** si8_4; int bits2c; int ui32b; } ;
typedef int ssize_t ;
typedef enum pprint_mapv_kind_t { ____Placeholder_pprint_mapv_kind_t } pprint_mapv_kind_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (char*,int,char*,char*,int,int,int,int,int,int,int,int,...) ;

ssize_t FUNC_1(enum pprint_mapv_kind_t VAR_3,
     char *VAR_4, ssize_t VAR_5,
     bool VAR_6, unsigned int VAR_7,
     int VAR_8, void *VAR_9)
{
 ssize_t VAR_10 = -1;

 if (VAR_3 == VAR_0) {
  struct pprint_mapv *VAR_11 = VAR_9;

  VAR_10 = FUNC_0(VAR_4, VAR_5,
       "%s%u: {%u,0,%d,0x%x,0x%x,0x%x,"
       "{%lu|[%u,%u,%u,%u,%u,%u,%u,%u]},%s,"
       "%u,0x%x,[[%d,%d],[%d,%d]]}\n",
       VAR_6 ? "\tcpu" : "",
       VAR_6 ? VAR_8 : VAR_7,
       VAR_11->ui32, VAR_11->si32,
       VAR_11->unused_bits2a,
       VAR_11->bits28,
       VAR_11->unused_bits2b,
       VAR_11->ui64,
       VAR_11->ui8a[0], VAR_11->ui8a[1],
       VAR_11->ui8a[2], VAR_11->ui8a[3],
       VAR_11->ui8a[4], VAR_11->ui8a[5],
       VAR_11->ui8a[6], VAR_11->ui8a[7],
       VAR_2[VAR_11->aenum],
       VAR_11->ui32b,
       VAR_11->bits2c,
       VAR_11->si8_4[0][0], VAR_11->si8_4[0][1],
       VAR_11->si8_4[1][0], VAR_11->si8_4[1][1]);
 }


 if (VAR_3 == VAR_1) {
  struct pprint_mapv_int128 *VAR_12 = VAR_9;

  VAR_10 = FUNC_0(VAR_4, VAR_5,
       "%s%u: {0x%lx,0x%lx,0x%lx,"
       "0x%lx%016lx,0x%lx%016lx}\n",
       VAR_6 ? "\tcpu" : "",
       VAR_6 ? VAR_8 : VAR_7,
       (uint64_t)VAR_12->si128a,
       (uint64_t)VAR_12->si128b,
       (uint64_t)VAR_12->bits3,
       (uint64_t)(VAR_12->bits80 >> 64),
       (uint64_t)VAR_12->bits80,
       (uint64_t)(VAR_12->ui128 >> 64),
       (uint64_t)VAR_12->ui128);
 }


 return VAR_10;
}
