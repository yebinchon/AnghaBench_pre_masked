
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int hb_face_t ;
typedef int hb_blob_t ;


 int FUNC_0 (char,char,char,char) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,unsigned int*) ;
 int * FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5 (hb_face_t *VAR_0, uint16_t VAR_1, bool VAR_2)
{
  hb_blob_t *VAR_3 = FUNC_4 (VAR_0, FUNC_0 ('m','a','x', 'p'));

  unsigned int VAR_4;
  uint8_t *VAR_5 = (uint8_t *) FUNC_3(VAR_3, &VAR_4);

  FUNC_1 (VAR_5, 4, VAR_1);
  if (!VAR_2)
  {
    FUNC_1 (VAR_5, 14, 1);
    FUNC_1 (VAR_5, 16, 0);
    FUNC_1 (VAR_5, 18, 0);
    FUNC_1 (VAR_5, 20, 0);
    FUNC_1 (VAR_5, 22, 0);
    FUNC_1 (VAR_5, 24, 0);
    FUNC_1 (VAR_5, 26, 0);
  }

  FUNC_2 (VAR_3);
}
