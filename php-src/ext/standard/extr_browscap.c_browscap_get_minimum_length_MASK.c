
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t prefix_len; scalar_t__* contains_len; } ;
typedef TYPE_1__ browscap_entry ;


 int VAR_0 ;

__attribute__((used)) static inline size_t FUNC_0(browscap_entry *VAR_1) {
 size_t VAR_2 = VAR_1->prefix_len;
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2 += VAR_1->contains_len[VAR_3];
 }
 return VAR_2;
}
