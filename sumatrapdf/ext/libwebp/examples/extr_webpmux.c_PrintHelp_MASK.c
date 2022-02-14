
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(void) {
  FUNC_0("Usage: webpmux -get GET_OPTIONS INPUT -o OUTPUT\n");
  FUNC_0("       webpmux -set SET_OPTIONS INPUT -o OUTPUT\n");
  FUNC_0("       webpmux -duration DURATION_OPTIONS [-duration ...]\n");
  FUNC_0("               INPUT -o OUTPUT\n");
  FUNC_0("       webpmux -strip STRIP_OPTIONS INPUT -o OUTPUT\n");
  FUNC_0("       webpmux -frame FRAME_OPTIONS [-frame...] [-loop LOOP_COUNT]"
         "\n");
  FUNC_0("               [-bgcolor BACKGROUND_COLOR] -o OUTPUT\n");
  FUNC_0("       webpmux -info INPUT\n");
  FUNC_0("       webpmux [-h|-help]\n");
  FUNC_0("       webpmux -version\n");
  FUNC_0("       webpmux argument_file_name\n");

  FUNC_0("\n");
  FUNC_0("GET_OPTIONS:\n");
  FUNC_0(" Extract relevant data:\n");
  FUNC_0("   icc       get ICC profile\n");
  FUNC_0("   exif      get EXIF metadata\n");
  FUNC_0("   xmp       get XMP metadata\n");
  FUNC_0("   frame n   get nth frame\n");

  FUNC_0("\n");
  FUNC_0("SET_OPTIONS:\n");
  FUNC_0(" Set color profile/metadata:\n");
  FUNC_0("   icc  file.icc     set ICC profile\n");
  FUNC_0("   exif file.exif    set EXIF metadata\n");
  FUNC_0("   xmp  file.xmp     set XMP metadata\n");
  FUNC_0("   where:    'file.icc' contains the ICC profile to be set,\n");
  FUNC_0("             'file.exif' contains the EXIF metadata to be set\n");
  FUNC_0("             'file.xmp' contains the XMP metadata to be set\n");

  FUNC_0("\n");
  FUNC_0("DURATION_OPTIONS:\n");
  FUNC_0(" Set duration of selected frames:\n");
  FUNC_0("   duration            set duration for each frames\n");
  FUNC_0("   duration,frame      set duration of a particular frame\n");
  FUNC_0("   duration,start,end  set duration of frames in the\n");
  FUNC_0("                        interval [start,end])\n");
  FUNC_0("   where: 'duration' is the duration in milliseconds\n");
  FUNC_0("          'start' is the start frame index\n");
  FUNC_0("          'end' is the inclusive end frame index\n");
  FUNC_0("           The special 'end' value '0' means: last frame.\n");

  FUNC_0("\n");
  FUNC_0("STRIP_OPTIONS:\n");
  FUNC_0(" Strip color profile/metadata:\n");
  FUNC_0("   icc       strip ICC profile\n");
  FUNC_0("   exif      strip EXIF metadata\n");
  FUNC_0("   xmp       strip XMP metadata\n");

  FUNC_0("\n");
  FUNC_0("FRAME_OPTIONS(i):\n");
  FUNC_0(" Create animation:\n");
  FUNC_0("   file_i +di+[xi+yi[+mi[bi]]]\n");
  FUNC_0("   where:    'file_i' is the i'th animation frame (WebP format),\n");
  FUNC_0("             'di' is the pause duration before next frame,\n");
  FUNC_0("             'xi','yi' specify the image offset for this frame,\n");
  FUNC_0("             'mi' is the dispose method for this frame (0 or 1),\n");
  FUNC_0("             'bi' is the blending method for this frame (+b or -b)"
         "\n");

  FUNC_0("\n");
  FUNC_0("LOOP_COUNT:\n");
  FUNC_0(" Number of times to repeat the animation.\n");
  FUNC_0(" Valid range is 0 to 65535 [Default: 0 (infinite)].\n");

  FUNC_0("\n");
  FUNC_0("BACKGROUND_COLOR:\n");
  FUNC_0(" Background color of the canvas.\n");
  FUNC_0("  A,R,G,B\n");
  FUNC_0("  where:    'A', 'R', 'G' and 'B' are integers in the range 0 to 255 "
         "specifying\n");
  FUNC_0("            the Alpha, Red, Green and Blue component values "
         "respectively\n");
  FUNC_0("            [Default: 255,255,255,255]\n");

  FUNC_0("\nINPUT & OUTPUT are in WebP format.\n");

  FUNC_0("\nNote: The nature of EXIF, XMP and ICC data is not checked");
  FUNC_0(" and is assumed to be\nvalid.\n");
  FUNC_0("\nNote: if a single file name is passed as the argument, the "
         "arguments will be\n");
  FUNC_0("tokenized from this file. The file name must not start with "
         "the character '-'.\n");
}
