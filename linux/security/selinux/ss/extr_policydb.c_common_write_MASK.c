
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct policy_data {void* fp; } ;
struct TYPE_3__ {size_t nprim; TYPE_2__* table; } ;
struct common_datum {size_t value; TYPE_1__ permissions; } ;
typedef char __le32 ;
struct TYPE_4__ {size_t nel; } ;


 char FUNC_0 (size_t) ;
 int FUNC_1 (TYPE_2__*,int ,void*) ;
 int VAR_0 ;
 int FUNC_2 (char*,int,size_t,void*) ;
 size_t FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(void *VAR_1, void *VAR_2, void *VAR_3)
{
 char *VAR_4 = VAR_1;
 struct common_datum *VAR_5 = VAR_2;
 struct policy_data *VAR_6 = VAR_3;
 void *VAR_7 = VAR_6->fp;
 __le32 VAR_8[4];
 size_t VAR_9;
 int VAR_10;

 VAR_9 = FUNC_3(VAR_4);
 VAR_8[0] = FUNC_0(VAR_9);
 VAR_8[1] = FUNC_0(VAR_5->value);
 VAR_8[2] = FUNC_0(VAR_5->permissions.nprim);
 VAR_8[3] = FUNC_0(VAR_5->permissions.table->nel);
 VAR_10 = FUNC_2(VAR_8, sizeof(u32), 4, VAR_7);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_2(VAR_4, 1, VAR_9, VAR_7);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_1(VAR_5->permissions.table, VAR_0, VAR_7);
 if (VAR_10)
  return VAR_10;

 return 0;
}
