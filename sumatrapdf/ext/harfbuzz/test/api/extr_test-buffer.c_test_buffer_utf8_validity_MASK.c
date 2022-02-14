
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int max_len; scalar_t__ offset; scalar_t__ valid; int utf8; } ;
typedef TYPE_1__ utf8_validity_test_t ;
struct TYPE_7__ {scalar_t__ codepoint; scalar_t__ cluster; } ;
typedef TYPE_2__ hb_glyph_info_t ;
typedef scalar_t__ hb_codepoint_t ;
typedef int hb_buffer_t ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int ,int *) ;
 int FUNC_4 (char*,unsigned int,char*) ;
 int FUNC_5 (int *,int ,unsigned int,int ,unsigned int) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *) ;
 TYPE_2__* FUNC_9 (int *,unsigned int*) ;
 int FUNC_10 (int *,scalar_t__) ;
 unsigned int FUNC_11 (int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void
FUNC_12 (void)
{
  hb_buffer_t *VAR_1;
  unsigned int VAR_2;

  VAR_1 = FUNC_7 ();
  FUNC_10 (VAR_1, (hb_codepoint_t) -1);

  for (VAR_2 = 0; VAR_2 < FUNC_0 (VAR_0); VAR_2++)
  {
    const utf8_validity_test_t *VAR_3 = &VAR_0[VAR_2];
    unsigned int VAR_4, VAR_5, VAR_6, VAR_7;
    hb_glyph_info_t *VAR_8;
    char *VAR_9;

    VAR_9 = FUNC_3 (VAR_3->utf8, ((void*)0));
    FUNC_4 ("UTF-8 test #%d: %s", VAR_2, VAR_9);
    FUNC_2 (VAR_9);

    VAR_4 = FUNC_11 (VAR_3->utf8);
    if (VAR_3->max_len == -1)
      VAR_5 = VAR_4;
    else
      VAR_5 = VAR_3->max_len;

    FUNC_6 (VAR_1);
    FUNC_5 (VAR_1, VAR_3->utf8, VAR_4, 0, VAR_5);

    VAR_8 = FUNC_9 (VAR_1, &VAR_7);
    for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
      if (VAR_8[VAR_6].codepoint == (hb_codepoint_t) -1)
 break;

    FUNC_1 (VAR_3->valid ? VAR_6 == VAR_7 : VAR_6 < VAR_7);
    if (!VAR_3->valid)
      FUNC_1 (VAR_8[VAR_6].cluster == VAR_3->offset);
  }

  FUNC_8 (VAR_1);
}
