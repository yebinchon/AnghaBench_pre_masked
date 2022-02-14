
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_splitter {int nents; struct sg_splitter* out_sg; } ;
struct scatterlist {int nents; struct scatterlist* out_sg; } ;
typedef int off_t ;
typedef int gfp_t ;


 int VAR_0 ;
 struct sg_splitter* FUNC_0 (int const,int,int ) ;
 int FUNC_1 (struct sg_splitter*) ;
 struct sg_splitter* FUNC_2 (int,int,int ) ;
 int FUNC_3 (struct sg_splitter*,int const,int const,int const,size_t const*,struct sg_splitter*,int) ;
 int const FUNC_4 (struct sg_splitter*) ;
 int FUNC_5 (struct sg_splitter*,int const) ;
 int FUNC_6 (struct sg_splitter*,int const) ;

int FUNC_7(struct scatterlist *VAR_1, const int VAR_2,
      const off_t VAR_3, const int VAR_4,
      const size_t *VAR_5,
      struct scatterlist **VAR_6, int *VAR_7,
      gfp_t VAR_8)
{
 int VAR_9, VAR_10;
 struct sg_splitter *VAR_11;

 VAR_11 = FUNC_0(VAR_4, sizeof(*VAR_11), VAR_8);
 if (!VAR_11)
  return -VAR_0;

 VAR_10 = FUNC_3(VAR_1, FUNC_4(VAR_1), VAR_4, VAR_3, VAR_5,
      VAR_11, 0);
 if (VAR_10 < 0)
  goto err;

 VAR_10 = -VAR_0;
 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  VAR_11[VAR_9].out_sg = FUNC_2(VAR_11[VAR_9].nents,
          sizeof(struct scatterlist),
          VAR_8);
  if (!VAR_11[VAR_9].out_sg)
   goto err;
 }




 FUNC_6(VAR_11, VAR_4);
 if (VAR_2) {
  VAR_10 = FUNC_3(VAR_1, VAR_2, VAR_4, VAR_3,
      VAR_5, VAR_11, 1);
  if (VAR_10 < 0)
   goto err;
  FUNC_5(VAR_11, VAR_4);
 }

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  VAR_6[VAR_9] = VAR_11[VAR_9].out_sg;
  if (VAR_7)
   VAR_7[VAR_9] = VAR_11[VAR_9].nents;
 }

 FUNC_1(VAR_11);
 return 0;

err:
 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++)
  FUNC_1(VAR_11[VAR_9].out_sg);
 FUNC_1(VAR_11);
 return VAR_10;
}
