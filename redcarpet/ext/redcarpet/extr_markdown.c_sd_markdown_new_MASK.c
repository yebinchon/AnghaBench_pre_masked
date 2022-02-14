
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ link; scalar_t__ image; scalar_t__ linebreak; scalar_t__ codespan; scalar_t__ triple_emphasis; scalar_t__ double_emphasis; scalar_t__ emphasis; } ;
struct sd_markdown {unsigned int ext_flags; size_t max_nesting; scalar_t__ in_link_body; void* opaque; void** active_char; TYPE_1__ cb; int * work_bufs; } ;
struct sd_callbacks {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 int FUNC_0 (int ) ;
 struct sd_markdown* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,struct sd_callbacks const*,int) ;
 int FUNC_3 (void**,int,int) ;
 int FUNC_4 (int *,int) ;

struct sd_markdown *
FUNC_5(
 unsigned int VAR_19,
 size_t VAR_20,
 const struct sd_callbacks *VAR_21,
 void *VAR_22)
{
 struct sd_markdown *VAR_23 = ((void*)0);

 FUNC_0(VAR_20 > 0 && VAR_21);

 VAR_23 = FUNC_1(sizeof(struct sd_markdown));
 if (!VAR_23)
  return ((void*)0);

 FUNC_2(&VAR_23->cb, VAR_21, sizeof(struct sd_callbacks));

 FUNC_4(&VAR_23->work_bufs[VAR_0], 4);
 FUNC_4(&VAR_23->work_bufs[VAR_1], 8);

 FUNC_3(VAR_23->active_char, 0x0, 256);

 if (VAR_23->cb.emphasis || VAR_23->cb.double_emphasis || VAR_23->cb.triple_emphasis) {
  VAR_23->active_char['*'] = VAR_6;
  VAR_23->active_char['_'] = VAR_6;

  if (VAR_19 & VAR_17)
   VAR_23->active_char['~'] = VAR_6;
  if (VAR_19 & VAR_15)
   VAR_23->active_char['='] = VAR_6;
  if (VAR_19 & VAR_16)
   VAR_23->active_char['"'] = VAR_12;
 }

 if (VAR_23->cb.codespan)
  VAR_23->active_char['`'] = VAR_5;

 if (VAR_23->cb.linebreak)
  VAR_23->active_char['\n'] = VAR_10;

 if (VAR_23->cb.image || VAR_23->cb.link)
  VAR_23->active_char['['] = VAR_11;

 VAR_23->active_char['<'] = VAR_9;
 VAR_23->active_char['\\'] = VAR_8;
 VAR_23->active_char['&'] = VAR_7;

 if (VAR_19 & VAR_14) {
  VAR_23->active_char[':'] = VAR_3;
  VAR_23->active_char['@'] = VAR_2;
  VAR_23->active_char['w'] = VAR_4;
 }

 if (VAR_19 & VAR_18)
  VAR_23->active_char['^'] = VAR_13;


 VAR_23->ext_flags = VAR_19;
 VAR_23->opaque = VAR_22;
 VAR_23->max_nesting = VAR_20;
 VAR_23->in_link_body = 0;

 return VAR_23;
}
