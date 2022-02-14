
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct wspace {void* errlocs; void* derrlocs; void* s; void* corr; void* r; void* c; } ;
struct rs_codec {int nroots; int nn; } ;


 int VAR_0 ;
 int FUNC_0 (struct wspace*) ;
 void* FUNC_1 (int,int,int ) ;
 struct wspace* FUNC_2 (int,int ) ;

__attribute__((used)) static struct wspace *FUNC_3(struct rs_codec *VAR_1)
{
 int VAR_2 = VAR_1->nroots;
 struct wspace *VAR_3;
 int VAR_4 = VAR_1->nn;

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->c = FUNC_1(2 * (VAR_4 + VAR_2),
    sizeof(uint16_t), VAR_0);
 if (!VAR_3->c)
  goto err;

 VAR_3->r = VAR_3->c + VAR_4;
 VAR_3->s = VAR_3->r + VAR_4;
 VAR_3->corr = VAR_3->s + VAR_2;

 VAR_3->errlocs = FUNC_1(VAR_4 + VAR_2, sizeof(int), VAR_0);
 if (!VAR_3->errlocs)
  goto err;

 VAR_3->derrlocs = VAR_3->errlocs + VAR_4;
 return VAR_3;

err:
 FUNC_0(VAR_3);
 return ((void*)0);
}
