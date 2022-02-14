
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key {int index_key; int serial; } ;
struct assoc_array_edit {scalar_t__ dead_leaf; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct key*,struct assoc_array_edit**) ;
 int FUNC_1 (struct key*,int *,struct assoc_array_edit**) ;
 int FUNC_2 (struct key*,struct key*) ;
 int FUNC_3 (struct key*,struct key*) ;
 int FUNC_4 (struct key*,int *,struct assoc_array_edit*) ;
 int FUNC_5 (struct key*,struct key*,int *) ;
 int FUNC_6 (struct key*,struct key*,struct assoc_array_edit**) ;
 int FUNC_7 (struct key*,struct key*,struct assoc_array_edit**) ;
 int FUNC_8 (struct key*,struct key*,struct assoc_array_edit*) ;
 int FUNC_9 (char*,int ,int ,int ) ;
 int FUNC_10 (struct key*) ;
 int FUNC_11 (char*,int) ;

int FUNC_12(struct key *VAR_2,
      struct key *VAR_3,
      struct key *VAR_4,
      unsigned int VAR_5)
{
 struct assoc_array_edit *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
 int VAR_8;

 FUNC_9("%d,%d,%d", VAR_2->serial, VAR_3->serial, VAR_4->serial);

 if (VAR_3 == VAR_4)
  return 0;

 FUNC_10(VAR_2);
 FUNC_10(VAR_3);
 FUNC_10(VAR_4);

 VAR_8 = FUNC_5(VAR_3, VAR_4, &VAR_2->index_key);
 if (VAR_8 < 0)
  goto out;
 VAR_8 = FUNC_7(VAR_3, VAR_2, &VAR_6);
 if (VAR_8 < 0)
  goto error;
 VAR_8 = FUNC_1(VAR_4, &VAR_2->index_key, &VAR_7);
 if (VAR_8 < 0)
  goto error;

 VAR_8 = -VAR_0;
 if (VAR_7->dead_leaf && (VAR_5 & VAR_1))
  goto error;

 VAR_8 = FUNC_3(VAR_4, VAR_2);
 if (VAR_8 < 0)
  goto error;
 VAR_8 = FUNC_2(VAR_4, VAR_2);
 if (VAR_8 < 0)
  goto error;

 FUNC_6(VAR_3, VAR_2, &VAR_6);
 FUNC_0(VAR_2, &VAR_7);
error:
 FUNC_4(VAR_4, &VAR_2->index_key, VAR_7);
 FUNC_8(VAR_3, VAR_2, VAR_6);
out:
 FUNC_11(" = %d", VAR_8);
 return VAR_8;
}
