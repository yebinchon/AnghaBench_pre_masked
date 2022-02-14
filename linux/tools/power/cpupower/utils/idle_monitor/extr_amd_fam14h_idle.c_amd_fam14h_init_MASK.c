
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
 int FUNC_0 (TYPE_1__*,int*,int*,unsigned int) ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,int,int,...) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int,int) ;
 scalar_t__** VAR_3 ;

__attribute__((used)) static int FUNC_4(cstate_t *VAR_4, unsigned int VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 uint32_t VAR_9;

 VAR_8 = FUNC_0(VAR_4, &VAR_7, &VAR_6, VAR_5);
 if (VAR_8)
  return VAR_8;


 if (VAR_4->id == VAR_0) {
  VAR_9 = FUNC_2(VAR_2, VAR_7);
  VAR_9 |= 1 << VAR_6;
  VAR_9 = FUNC_3(VAR_2, VAR_7, VAR_9);
  return VAR_8;
 }


 VAR_9 = FUNC_2(VAR_2, VAR_1);
 FUNC_1("Init %s: read at offset: 0x%x val: %u\n", VAR_4->name,
        VAR_1, (unsigned int) VAR_9);
 VAR_9 |= 1 << VAR_6;
 FUNC_3(VAR_2, VAR_1, VAR_9);

 FUNC_1("Init %s: offset: 0x%x enable_bit: %d - val: %u (%u)\n",
        VAR_4->name, VAR_1, VAR_6,
        (unsigned int) VAR_9, VAR_5);


 FUNC_3(VAR_2, VAR_7, 0);
 VAR_3[VAR_4->id][VAR_5] = 0;

 return 0;
}
