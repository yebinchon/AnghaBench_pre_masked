
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_tag_t ;
typedef int hb_face_t ;
typedef int hb_blob_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static inline void
FUNC_5 (hb_face_t *VAR_1,
                      hb_face_t *VAR_2,
                      hb_tag_t VAR_3)
{
  hb_blob_t *VAR_4, *VAR_5;
  FUNC_1(VAR_0, "compare %c%c%c%c\n", FUNC_0(VAR_3));
  VAR_4 = FUNC_3 (VAR_1, VAR_3);
  VAR_5 = FUNC_3 (VAR_2, VAR_3);
  FUNC_4 (VAR_4, VAR_5);
  FUNC_2 (VAR_4);
  FUNC_2 (VAR_5);
}
