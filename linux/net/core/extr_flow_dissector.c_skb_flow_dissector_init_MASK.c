
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flow_dissector_key {scalar_t__ offset; size_t key_id; } ;
struct flow_dissector {scalar_t__* offset; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct flow_dissector*,size_t) ;
 int FUNC_2 (struct flow_dissector*,size_t) ;
 int FUNC_3 (struct flow_dissector*,int ,int) ;

void FUNC_4(struct flow_dissector *VAR_3,
        const struct flow_dissector_key *VAR_4,
        unsigned int VAR_5)
{
 unsigned int VAR_6;

 FUNC_3(VAR_3, 0, sizeof(*VAR_3));

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++, VAR_4++) {



  FUNC_0(VAR_4->offset > VAR_2);
  FUNC_0(FUNC_2(VAR_3,
       VAR_4->key_id));

  FUNC_1(VAR_3, VAR_4->key_id);
  VAR_3->offset[VAR_4->key_id] = VAR_4->offset;
 }




 FUNC_0(!FUNC_2(VAR_3,
       VAR_1));
 FUNC_0(!FUNC_2(VAR_3,
       VAR_0));
}
