
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct update_info {scalar_t__ etag_remote; scalar_t__ etag_local; int temp; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct update_info*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct update_info*) ;
 int FUNC_4 (struct update_info*,int) ;

__attribute__((used)) static void *FUNC_5(void *VAR_0)
{
 struct update_info *VAR_1 = VAR_0;
 int VAR_2;

 if (!FUNC_1(VAR_1))
  return ((void*)0);

 VAR_2 = FUNC_3(VAR_1);
 FUNC_4(VAR_1, VAR_2);
 FUNC_2(VAR_1->temp);

 if (VAR_1->etag_local)
  FUNC_0(VAR_1->etag_local);
 if (VAR_1->etag_remote)
  FUNC_0(VAR_1->etag_remote);

 return ((void*)0);
}
