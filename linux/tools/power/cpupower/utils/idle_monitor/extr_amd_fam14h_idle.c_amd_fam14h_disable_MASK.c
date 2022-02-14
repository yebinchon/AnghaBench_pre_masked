
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {size_t id; int name; } ;
typedef TYPE_1__ cstate_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int*,int*,unsigned int) ;
 int VAR_4 ;
 int** VAR_5 ;
 int FUNC_1 (char*,char*,int,unsigned int,...) ;
 int VAR_6 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int,int) ;
 int** VAR_7 ;

__attribute__((used)) static int FUNC_4(cstate_t *VAR_8, unsigned int VAR_9)
{
 int VAR_10, VAR_11, VAR_12;
 uint32_t VAR_13;

 VAR_12 = FUNC_0(VAR_8, &VAR_11, &VAR_10, VAR_9);
 if (VAR_12)
  return VAR_12;

 VAR_13 = FUNC_2(VAR_4, VAR_11);
 FUNC_1("%s: offset: 0x%x %u\n", VAR_8->name, VAR_11, VAR_13);
 if (VAR_8->id == VAR_0) {

  VAR_6 = (VAR_13 & (1 << VAR_2)) |
   (VAR_13 & (1 << VAR_3));

  FUNC_1("NBP1 was %sentered - 0x%x - enable_bit: "
         "%d - pci_offset: 0x%x\n",
         VAR_6 ? "" : "not ",
         VAR_13, VAR_10, VAR_11);
  return VAR_12;
 }
 VAR_5[VAR_8->id][VAR_9] = VAR_13;

 FUNC_1("%s: Current -  %llu (%u)\n", VAR_8->name,
        VAR_5[VAR_8->id][VAR_9], VAR_9);
 FUNC_1("%s: Previous - %llu (%u)\n", VAR_8->name,
        VAR_7[VAR_8->id][VAR_9], VAR_9);

 VAR_13 = FUNC_2(VAR_4, VAR_1);
 VAR_13 &= ~(1 << VAR_10);
 FUNC_3(VAR_4, VAR_1, VAR_13);

 return 0;
}
