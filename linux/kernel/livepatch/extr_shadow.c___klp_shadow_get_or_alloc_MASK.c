
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct klp_shadow {unsigned long id; void* data; void* obj; int node; } ;
typedef int (* klp_shadow_ctor_t ) (void*,void*,void*) ;
typedef int gfp_t ;


 int FUNC_0 (int,char*,void*,unsigned long) ;
 int FUNC_1 (int ,int *,unsigned long) ;
 int FUNC_2 (struct klp_shadow*) ;
 void* FUNC_3 (void*,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 struct klp_shadow* FUNC_4 (size_t,int ) ;
 int FUNC_5 (char*,void*,unsigned long,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 scalar_t__ FUNC_8 (void*) ;

__attribute__((used)) static void *FUNC_9(void *VAR_2, unsigned long VAR_3,
           size_t VAR_4, gfp_t VAR_5,
           klp_shadow_ctor_t VAR_6, void *VAR_7,
           bool VAR_8)
{
 struct klp_shadow *VAR_9;
 void *VAR_10;
 unsigned long VAR_11;


 VAR_10 = FUNC_3(VAR_2, VAR_3);
 if (VAR_10)
  goto exists;






 VAR_9 = FUNC_4(VAR_4 + sizeof(*VAR_9), VAR_5);
 if (!VAR_9)
  return ((void*)0);


 FUNC_6(&VAR_1, VAR_11);
 VAR_10 = FUNC_3(VAR_2, VAR_3);
 if (FUNC_8(VAR_10)) {




  FUNC_7(&VAR_1, VAR_11);
  FUNC_2(VAR_9);
  goto exists;
 }

 VAR_9->obj = VAR_2;
 VAR_9->id = VAR_3;

 if (VAR_6) {
  int VAR_12;

  VAR_12 = VAR_6(VAR_2, VAR_9->data, VAR_7);
  if (VAR_12) {
   FUNC_7(&VAR_1, VAR_11);
   FUNC_2(VAR_9);
   FUNC_5("Failed to construct shadow variable <%p, %lx> (%d)\n",
          VAR_2, VAR_3, VAR_12);
   return ((void*)0);
  }
 }


 FUNC_1(VAR_0, &VAR_9->node,
       (unsigned long)VAR_9->obj);
 FUNC_7(&VAR_1, VAR_11);

 return VAR_9->data;

exists:
 if (VAR_8) {
  FUNC_0(1, "Duplicate shadow variable <%p, %lx>\n", VAR_2, VAR_3);
  return ((void*)0);
 }

 return VAR_10;
}
