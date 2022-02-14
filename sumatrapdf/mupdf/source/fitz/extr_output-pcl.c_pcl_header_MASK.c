
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int odd_page_init ;
struct TYPE_4__ {char* odd_page_init; char* even_page_init; int page_count; int features; int orientation; int paper_size; scalar_t__ duplex; scalar_t__ duplex_set; int tumble; } ;
typedef TYPE_1__ fz_pcl_options ;
typedef int fz_output ;
typedef int fz_context ;
typedef int even_page_init ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *,char*,int) ;
 int FUNC_1 (int *,int *,char*) ;
 int FUNC_2 (TYPE_1__*,char*,int,char*,int) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_5, fz_output *VAR_6, fz_pcl_options *VAR_7, int VAR_8, int VAR_9, int VAR_10, int VAR_11, int VAR_12)
{
 char VAR_13[80];
 char VAR_14[80];

 FUNC_2(VAR_7, VAR_13, sizeof(VAR_13), VAR_7->odd_page_init, VAR_9);
 FUNC_2(VAR_7, VAR_14, sizeof(VAR_14), VAR_7->even_page_init, VAR_9);

 if (VAR_7->page_count == 0)
 {
  if (VAR_7->features & VAR_0)
   FUNC_1(VAR_5, VAR_6, "\033%-12345X@PJL\r\n@PJL ENTER LANGUAGE = PCL\r\n");
  FUNC_1(VAR_5, VAR_6, "\033E");

  FUNC_1(VAR_5, VAR_6, "\033&10e-180u36Z");

  if (VAR_7->features & VAR_4)
  {
   FUNC_0(VAR_5, VAR_6, "\033&l%dO", VAR_7->orientation);
  }


  if (VAR_7->features & VAR_1)
  {

   {
    int VAR_15 = (VAR_11 * 720 + (VAR_9>>1)) / VAR_9;
    int VAR_16 = (VAR_12 * 720 + (VAR_10>>1)) / VAR_10;

    FUNC_0(VAR_5, VAR_6, "\033&f%dI", VAR_15);
    FUNC_0(VAR_5, VAR_6, "\033&f%dJ", VAR_16);
   }
   FUNC_0(VAR_5, VAR_6, "\033&l%dA", VAR_7->paper_size);
  }

  if (VAR_7->features & VAR_3)
  {
   if (VAR_7->duplex_set)
   {
    if (VAR_7->duplex)
    {
     if (!VAR_7->tumble)
      FUNC_1(VAR_5, VAR_6, "\033&l1S");
     else
      FUNC_1(VAR_5, VAR_6, "\033&l2S");
    }
    else
     FUNC_1(VAR_5, VAR_6, "\033&l0S");
   }
   else
   {

    FUNC_1(VAR_5, VAR_6, "\033&l1S");
   }
  }
 }
 if ((VAR_7->features & VAR_3) && VAR_7->duplex_set && VAR_7->duplex)
 {

  if (((VAR_7->page_count/VAR_8)%2) == 0)
  {
   if (VAR_7->page_count != 0 && (VAR_7->features & VAR_1))
   {
    FUNC_0(VAR_5, VAR_6, "\033&l%dA", VAR_7->paper_size);
   }
   FUNC_1(VAR_5, VAR_6, "\033&l0o0l0E");
   FUNC_1(VAR_5, VAR_6, VAR_7->odd_page_init);
  }
  else
   FUNC_1(VAR_5, VAR_6, VAR_7->even_page_init);
 }
 else
 {
  if (VAR_7->features & VAR_1)
  {
   FUNC_0(VAR_5, VAR_6, "\033&l%dA", VAR_7->paper_size);
  }
  FUNC_1(VAR_5, VAR_6, "\033&l0o0l0E");
  FUNC_1(VAR_5, VAR_6, VAR_7->odd_page_init);
 }

 FUNC_0(VAR_5, VAR_6, "\033&l%dX", VAR_8);


 FUNC_1(VAR_5, VAR_6, "\033*rB\033*p0x0Y");



 if (VAR_7->features & VAR_2)
 {
  FUNC_1(VAR_5, VAR_6, VAR_7->odd_page_init);
  FUNC_0(VAR_5, VAR_6, "\033&l%dX", VAR_8);
 }


 FUNC_0(VAR_5, VAR_6, "\033*t%dR", VAR_9);




 FUNC_0(VAR_5, VAR_6, "\033&u%dD", VAR_9);

 VAR_7->page_count++;
}
