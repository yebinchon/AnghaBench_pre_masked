
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_fcall {int size; int tag; int id; } ;
struct p9_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int ,int ) ;
 int FUNC_1 (struct p9_fcall*,int ,char*,int) ;
 int FUNC_2 (struct p9_client*,struct p9_fcall*) ;

int FUNC_3(struct p9_client *VAR_1, struct p9_fcall *VAR_2)
{
 int VAR_3 = VAR_2->size;
 int VAR_4;

 VAR_2->size = 0;
 VAR_4 = FUNC_1(VAR_2, 0, "d", VAR_3);
 VAR_2->size = VAR_3;

 FUNC_2(VAR_1, VAR_2);
 FUNC_0(VAR_0, ">>> size=%d type: %d tag: %d\n",
   VAR_2->size, VAR_2->id, VAR_2->tag);

 return VAR_4;
}
