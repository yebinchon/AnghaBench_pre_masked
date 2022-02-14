
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct html_renderopt {int flags; } ;
struct buf {size_t size; char* data; } ;


 int FUNC_0 (struct buf*,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct buf*,char) ;
 int FUNC_2 (struct buf*,char*,size_t) ;
 scalar_t__ FUNC_3 (char) ;

__attribute__((used)) static void
FUNC_4(struct buf *VAR_1, const struct buf *VAR_2, const struct buf *VAR_3, void *VAR_4)
{
 struct html_renderopt *VAR_5 = VAR_4;

 if (VAR_1->size) FUNC_1(VAR_1, '\n');

 if (VAR_3 && VAR_3->size) {
  size_t VAR_6, VAR_7;
  if (VAR_5->flags & VAR_0) {
   FUNC_0(VAR_1, "<pre><code class=\"prettyprint lang-");
   VAR_7++;
  } else {
   FUNC_0(VAR_1, "<pre><code class=\"");
  }

  for (VAR_6 = 0, VAR_7 = 0; VAR_6 < VAR_3->size; ++VAR_6, ++VAR_7) {
   while (VAR_6 < VAR_3->size && FUNC_3(VAR_3->data[VAR_6]))
    VAR_6++;

   if (VAR_6 < VAR_3->size) {
    size_t VAR_8 = VAR_6;
    while (VAR_6 < VAR_3->size && !FUNC_3(VAR_3->data[VAR_6]))
     VAR_6++;

    if (VAR_3->data[VAR_8] == '.')
     VAR_8++;

    if (VAR_7) FUNC_1(VAR_1, ' ');
    FUNC_2(VAR_1, VAR_3->data + VAR_8, VAR_6 - VAR_8);
   }
  }

  FUNC_0(VAR_1, "\">");
 } else if (VAR_5->flags & VAR_0) {
  FUNC_0(VAR_1, "<pre><code class=\"prettyprint\">");
 } else {
  FUNC_0(VAR_1, "<pre><code>");
 }

 if (VAR_2)
  FUNC_2(VAR_1, VAR_2->data, VAR_2->size);

 FUNC_0(VAR_1, "</code></pre>\n");
}
