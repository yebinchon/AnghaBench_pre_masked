
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct dst_entry {int output; int input; } ;
struct metadata_dst {int type; struct dst_entry dst; } ;
typedef enum metadata_type { ____Placeholder_metadata_type } metadata_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dst_entry*,int *,int *,int,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct dst_entry*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct metadata_dst *VAR_6,
    enum metadata_type VAR_7, u8 VAR_8)

{
 struct dst_entry *VAR_9;

 VAR_9 = &VAR_6->dst;
 FUNC_0(VAR_9, &VAR_5, ((void*)0), 1, VAR_2,
   VAR_0 | VAR_1);

 VAR_9->input = VAR_3;
 VAR_9->output = VAR_4;

 FUNC_1(VAR_9 + 1, 0, sizeof(*VAR_6) + VAR_8 - sizeof(*VAR_9));
 VAR_6->type = VAR_7;
}
